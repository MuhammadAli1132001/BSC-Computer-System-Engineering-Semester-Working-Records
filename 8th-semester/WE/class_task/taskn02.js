function boxcheck() {
    
    if(document.myform[0].agree.checked==false){
        document.myform[0].btn.disalbed=true
    
    }
    else{
        document.myform[0].btn.disalbed=false
    }
}