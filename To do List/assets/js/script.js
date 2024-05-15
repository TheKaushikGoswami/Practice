function addTask(){

    let taskDesc = document.getElementById("task_name").value;

    if (taskDesc) {
        let taskItem = document.createElement('div');
        taskItem.className = 'task-item';
        let checkbox = document.createElement('input');
        checkbox.type = 'checkbox';
        checkbox.className = 'task-complete-checkbox mx-2';
        checkbox.addEventListener('change', function() {
            if (checkbox.checked) {
                taskItem.style.textDecoration = 'line-through';
            } else {
                taskItem.style.textDecoration = 'none';
            }
        });

        let taskText = document.createElement('span');
        taskText.className = 'task-text';
        taskText.innerHTML = taskDesc;
        taskItem.appendChild(checkbox);
        taskItem.appendChild(taskText);
        document.getElementById("tasks").appendChild(taskItem);
    }
    document.getElementById("task_name").value = '';
    
};
