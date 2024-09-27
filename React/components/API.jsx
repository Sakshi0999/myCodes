import React, { useEffect, useState } from "react";

const API = () => {
  const [data, setData] = useState([]);

  useEffect(() => {
    const fetchDataFromAPI = async () => {
      const api = await fetch("https://jsonplaceholder.typicode.com/todos");
      const data = await api.json();
      console.log("API data", data);
      setData(data);
    };
    fetchDataFromAPI();
  }, []);

  return (
    <>
      <div>
        Fetch API data
        <table>
          <thead>
            <tr>
              <th>User ID</th>
              <th>ID</th>
              <th>Title</th>
              <th>Completed</th>
            </tr>
          </thead>
          <tbody>
            {data.map((value) => (
              <tr key={value.id}>
                <td>{value.userId}</td>
                <td>{value.id}</td>
                <td>{value.title}</td>
                <td>{value.completed ? "True" : "False"}</td>
              </tr>
            ))}
          </tbody>
        </table>
      </div>
    </>
  );
};

export default API;
