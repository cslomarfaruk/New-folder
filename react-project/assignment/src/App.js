import "./App.css";
import "./index.css"
import AppList from "./components/AppList";

function App() {
  const janina = <h1 className="hello">Hello world</h1>;
  return (
    <div className="bg-gray-900 w-full h-[100vh]" >
     <AppList />
     {janina}
    </div>
  );
}

export default App;
