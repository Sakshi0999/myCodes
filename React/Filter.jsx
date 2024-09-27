import React from "react";

const Filter = () => {
  const Product = [
    { id: 1, title: "iphone16", category: "mobile" },
    { id: 2, title: "dell", category: "laptop" },
    { id: 3, title: "Mi tab", category: "Tab" },
    { id: 4, title: "iphone16", category: "mobile" },
  ];

  const filteredProduct = Product.filter((value) => value.category == "mobile");

  return (
    <div>
      <h1>Filtered Products</h1>
      {filteredProduct.map((value) => (
        <div key={value.id}>
          <h2>{value.title}</h2>
          <p> Category: {value.category}</p>
        </div>
      ))}
    </div>
  );
};

export default Filter;
