import { get_Data } from "./action";

const initialState ={
    apiData:[],
    dataa:[]
}

const reducer =(state =initialState,action)=>{

    switch (action.type) {
        case get_Data:
           return{
            ...state,apiData:action.payload
           }
           case 'getda':
            return{
             ...state,dataa:'hello'
            }
            
    
        default:
           return state;
    }

}
export default reducer;