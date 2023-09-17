import React, { useState } from "react";

let in_id = 1;

let initialTask = {
  id: in_id++,
  done: false,
  text: "Working on a project",
};

export default function AppList() {
  const [edit, setEdit] = useState(false);
  const [task, setTask] = useState([initialTask]);
  const [text, setText] = useState("");

  const taskInput = (e) => {
    setText(e.target.value);
  };

  const editTaskHandle = () => {
    setText("");
  };
  const addTask = () => {
    if (text.trim() !== "")
      setTask([
        ...task,
        {
          id: in_id++,
          text: text,
          done: false,
        },
      ]);
    setText("");
  };
  const onDelete = (id) => {
    console.log("delete clicked");
    setTask(task.filter((t) => id !== t.id));
  };
  return (
    <div className="p-16">
      <div className="border rounded-lg bg-gray-300 m-12 fixed">
        <h1 className="p-2 m-1 text-lg">Tasks Controller</h1>
        <div className="flex m-2 p-3">
          <input
            type="text"
            placeholder="Add task"
            value={text}
            onChange={taskInput}
            className="border-0 outline-none rounded-md p-1 m-2"
          />
          <button
            className="border rounded-lg  m-2 p-1 bg-blue-400 "
            onClick={addTask}
          >
            Add
          </button>
        </div>
        {task.map((element) => (
          <div key={element.id} className="ml-3 flex">
            <input type="checkbox" name="" key={task.id} className="" />

            {edit ? (
              <div key={element.id}>
                <input
                  type="text"
                  value={element.text}
                  className="border rounded-md" />
                <button
                  onClick={() => {
                    setEdit(false);
                    editTaskHandle(element.text);
                  } }
                  className="border rounded-md bg-green-300 p-1 m-2"
                >
                  Save
                </button>
              </div>
            ) : (
              <div key={element.id}>
                <p className="p-2">{element.text}</p>

                <button
                  onClick={() => setEdit(true)}
                  className="border rounded-md bg-green-300 p-1 m-2"
                >
                  Edit
                </button>
              </div>
            )}
            <button
              onClick={() => onDelete(element.id)}
              className="border rounded-lg bg-red-300 p-1 m-2"
            >
              Delete
            </button>
          </div>
        ))}
      </div>
    </div>
  );
}
