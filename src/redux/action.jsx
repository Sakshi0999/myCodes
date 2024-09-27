export const get_Data = 'get_Data'
import axios from 'axios'

export const getApi =(data)=>({
    type: get_Data,
    payload: data
})

export const getAllApiData =()=>(dispatch)=>{
axios.get('https://66e7fd2db17821a9d9dad88e.mockapi.io/studentApi')
.then((res)=>{
console.log(res.data,'dataaaa')
dispatch(getApi(res.data))
})
.catch((err)=>{
console.error('Data not found',err)
})
}
