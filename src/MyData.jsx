import React, { useEffect } from 'react'
import { useSelector, useDispatch } from 'react-redux'
import { getAllApiData } from './redux/action'

function MyData() {
    const apiData = useSelector((state)=>state.apiData)
    const dispatch = useDispatch()

    useEffect(()=>{

        dispatch(getAllApiData())

    },[dispatch])
    console.log(apiData,'selectorrrrr')
  return (
    <div>
      <h1> myData</h1>

      <table>
        <thead>
          <tr>
            <th>FirstName</th>
            <th>Email</th>
            <th>Password</th>
          </tr>
          <tbody>
            {
              apiData.map((value)=>{
                return <tr>
                  <td> {value.firstname} </td>
                  <td> {value.email} </td>
                  <td> {value.password} </td>
                </tr>
              })
            }
          
      
    
      

      
    
          </tbody>
        </thead>



      </table>
    </div>
  )
}

export default MyData
