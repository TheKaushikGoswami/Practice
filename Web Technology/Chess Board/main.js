function createBoard() {
    let rows = parseInt(document.getElementById("rows").value);
    let chessboard = document.getElementById("chessboard");
    chessboard.innerHTML = ""; // Clear previous board
    if (!rows) return; // Exit if rows is NaN or 0

    let squareSize = 400 / rows; // Calculate the size of each square based on the board size

    for (let i = 0; i < rows; i++) {
        let row = document.createElement("tr");
        for (let j = 0; j < rows; j++) {
            let square = document.createElement("td");
            square.style.width = `${squareSize}px`; // Set the dynamic width of the cell
            square.style.height = `${squareSize}px`; // Set the dynamic height of the cell
            square.classList.add((i + j) % 2 === 0 ? "white" : "black");
            row.appendChild(square);
        }
        chessboard.appendChild(row);
    }
}