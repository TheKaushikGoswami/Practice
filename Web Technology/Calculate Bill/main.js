var itemName= ['Laptop','Mobile','Printer','Headphone','Tablet','Computer','Speaker','LED','Projector','Mouse'];
var itemPrice= [50000,30000,15000,10000,20000,100000,15000,40000,150000,500];

var nameItem= document.querySelector('#item_name'),i;
for(i=0;i<itemName.length;i++){
    nameItem.innerHTML+= `<option value="${itemPrice[i]}">${itemName[i]}</option>`;
}

// showing quantity
var j;
var qty= document.querySelector('#qty');
for(j=1;j<11;j++){
    qty.innerHTML+= `<option vlaue="${j}">${j}</option>`
}

function additem(){
    var display= document.querySelector('#display-item');
    var productName= document.querySelector('#item_name').options[document.querySelector('#item_name').selectedIndex].text;

    var itemqty= document.querySelector('#qty').value; 
    var itemPrice= document.querySelector('#item_name').value;

    var body= document.querySelector('tbody');
    var row= document.createElement('tr');
    
    var col_1= document.createElement('td');
    col_1.innerHTML= productName;
    row.appendChild(col_1);

    var col_2= document.createElement('td');
    col_2.innerHTML= itemPrice;
    row.appendChild(col_2);

    var col_3= document.createElement('td');
    col_3.innerHTML= itemqty;
    row.appendChild(col_3);

    var col_4= document.createElement('td');
    var prices= col_4.innerHTML= parseInt(itemqty*itemPrice);
    row.appendChild(col_4);
    body.appendChild(row);

    var displayTotal= document.querySelector('#total');

    var totalAmount= parseInt(displayTotal.innerHTML || 0);
    totalAmount += prices;
    displayTotal.innerHTML = totalAmount ;
}