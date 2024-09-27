import React, { useState } from "react";
import MyFun from "./Person";
import Component from "./Component";
import Product from "./Props";
import Propsexample2 from "./Propsexample2";
import Ternory from "./components/Ternory";
import Computer from "./components/Styling";
import Events from "./components/Events";
import UseState from "./UseState";
import Map from "./Map";
import Filter from "./Filter";
import UseEffect from "./components/UseEffect";
import API from "./components/API";
import FormHandleing from "./components/FormHandleing";

const App = () => {
  // const [state, setState] = useState("anurag");
  // let data = 10;
  // console.log(state);
  // const clickMe = () => {
  // console.log("Hello i am click me function");
  // };

  return (
    <>
      {/* <div> */}
      {/* <MyFun/> */}
      {/* <Component/> */}

      {/* <Product title="samsung S24 Ultra" Brand="Samsung" price={550000} Ram = "8GB" Rom = "128GB"/> */}
      {/*  */}
      {/* <Product title="I phone 16" Brand="I Phone" price={950000} Ram = "8GB" Rom = "128GB" Camera = "200mp" /> */}

      {/*  */}
      {/* <Product title="One plus 13" Brand="OnePlus" price={450000} Ram = "8GB" Rom = "128GB" /> */}
      {/* </div> */}

      {/* <div> */}

      {/* <Propsexample2 Name="sakshi" age={24} place="indore" /> */}
      {/* <Propsexample2 Name="Dimple" age={25} place="MP" /> */}
      {/* </div> */}

      {/* <div>
        <Ternory
          fun={clickMe}
          state={state}
          fname="sakshi"
          record={data}
          Age={19}
          Pancard={true}
        />
      </div> */}

      {/* <div> */}
      {/* <Computer brandName = "hp" model = "probook" price = {150000}/> */}
      {/* <Computer brandName = "lenovo" model = "yoga" price = {250000}/> */}
      {/* <Computer brandName = "dell" model = "inspiron" price = {50000}/> */}

      {/* </div> */}

      {/* <div>
      <Events  />


      </div> */}

      {/* <div> */}
      {/* <UseState/> */}
      {/* </div> */}

      {/* <div><Map/></div> */}

      {/* <div> */}
      {/* <Filter/> */}
      {/* </div> */}

      {/* <div> <UseEffect/></div> */}

      {/* <div>
          <API/>
            </div> */}

      <div>
        <FormHandleing />
      </div>
    </>
  );
};

export default App;
