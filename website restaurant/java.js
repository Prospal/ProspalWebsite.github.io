function validasilogin(){
    var email = document.getElementById("email").value;
	var password = document.getElementById("password").value;
    if (email != "" && password!="") {
        return true;
    }else{
        alert('Email dan Password harus di isi !');
    }
}

function validateForm(){

    var email1 = document.getElementById('email');
    var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;

    var pw1 = document.getElementById('password1');  
    var pw2 = document.getElementById('password2');  

    var gender1 = document.getElementById("male");
    var gender2  = document.getElementById("female");


    var pattern = /^(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z]).{8,32}$/;

    if(document.forms["formPendaftaran"] ["username"].value == ""){
        alert("Nama Tidak Boleh Kosong");
            return false;
    }

    if (!filter.test(email1.value)) {
        alert("Email Tidak Boleh Kosong dan Penulisan nya harus benar");
        return false;

    }

    if(gender1.checked==false && gender2.checked==false){
        alert("Silahkan pilih gender")
        return false;
    }

    if (document.forms["formPendaftaran"]["country"].selectedIndex < 1) {
        alert("Pilih City.");
        return false;
    }
    if(!pattern.test(pw1.value)){
        alert("Masukan password dengan benar");
        return false;
    }

    if(pw1.value != pw2.value){
        alert("Password tidak sama")
        return false;
    }
}
