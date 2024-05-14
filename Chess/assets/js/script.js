const generateBoard = () => {
    
    let size = document.getElementById('size').value;
    let board = document.getElementById('board');
    board.innerHTML = '';

    for (let i = 0; i < size; i++) {
        let row = document.createElement('div');
        row.className = 'row';
        for (let j = 0; j < size; j++) {
            let cell = document.createElement('div');
            cell.className = 'cell';
            if ((i + j) % 2 === 0) {
                cell.classList.add('black');
            }
            row.appendChild(cell);
        }
        board.appendChild(row);
    }
    const cells = document.querySelectorAll('.cell');
    cells.forEach(cell => {
        cell.addEventListener('click', () => {
            cells.forEach(cell => {
                cell.classList.remove('active');
            });
            cell.classList.add('active');
        });
    });

    document.getElementById('size').value = '';

}