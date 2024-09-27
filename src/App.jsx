import React from 'react'
import { Provider } from 'react-redux'
import store from './redux/store'
import MyData from './MyData'



const App = () => {
 
  return (
    
    <div> 
      <Provider store={store}>
        
        <MyData />


      </Provider>
    
    </div>
    
  )
}

export default App
