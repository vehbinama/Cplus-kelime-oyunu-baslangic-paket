#include<iostream>
#include <string>



int main() {
	std::cout << "Merhaba bu bir kelime tahmin oyunudur." << std::endl;
	std::cout << " " << std::endl;
	std::cout << " Size her kelime ile ilgili 3 ipucu vericez ve siz de tahmin etmeye calisacaksiniz" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "  Eger sana verilen 3 hakkın da biterse oyunu kaybedersin ve program kapanir.  " << std::endl;
	std::cout<<" " << std::endl;
	

	
	
	std::string kelime1 = "okyanus";

	
	std::cout << "ilk ipucu  :  Dunya uzerinde buyuk bir su kutlesi" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ilk tahminini gir (3 hak) :  ";
	std::cout << " " << std::endl;
	std::string tahmin1;
	std::getline(std::cin, tahmin1);
	if (tahmin1 == kelime1) {
		std::cout << "  !!!tebrikler dogru cevap!!!  " << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}
	std::cout << " " << std::endl;
	std::cout << "ikinci ipucu  :  Denizlerin daha buyugudur." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ikinci tahminini gir (2 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin2;
	std::getline(std::cin, tahmin2);
	if (tahmin2 == kelime1) {
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}

	std::cout << " " << std::endl;
	std::cout << "ucuncu ipucu  :  Derinlikleri kesfetmek icin denizaltilar kullanilir." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ucuncu tahminini gir (1 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin3;
	std::getline(std::cin, tahmin3);
	if (tahmin3 == kelime1) {
		std::cout << " " << std::endl;
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin. Ve oyunu kaybettin!  " << std::endl;
		std::cout << " " << std::endl;
		return 0;
	}

	
	

		std::string kelime2 = "piramit";


	std::cout << "ilk ipucu  :  Antik Misir'da insa edilen buyuk yapilar." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ilk tahminini gir (3 hak) :  ";
	std::cout << " " << std::endl;
	std::string tahmin4;
	std::getline(std::cin, tahmin4);
	if (tahmin4 == kelime2) {
		std::cout << "  !!!tebrikler dogru cevap!!!  " << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}

	std::cout << "ikinci ipucu  :  Mumyalarin saklandigi yerler olarak da bilinirler." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ikinci tahminini gir (2 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin5;
	std::getline(std::cin, tahmin5);
	if (tahmin5 == kelime2) {
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}


	std::cout << "ucuncu ipucu  :  Gizemli bir sekilde insa edildiler ve hala buyuk ilgi cekmektedirler." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ucuncu tahminini gir (1 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin6;
	std::getline(std::cin, tahmin6);
	if (tahmin6 == kelime2) {
		std::cout << " " << std::endl;
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin. Ve oyunu kaybettin!  " << std::endl;
		return 0;

	}


   

	   std::string kelime3 = "teleskop";


   std::cout << "ilk ipucu  :  Uzaya bakmak ve gozlem yapmak icin kullanilir." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ilk tahminini gir (3 hak) :  ";
   std::cout << " " << std::endl;
   std::string tahmin7;
   std::getline(std::cin, tahmin7);
   if (tahmin7 == kelime3) {
	   std::cout << "  !!!tebrikler dogru cevap!!!  " << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin.  " << std::endl;
	   std::cout << " " << std::endl;
   }

   std::cout << "ikinci ipucu  :  Dunya disindaki gezegenleri ve yildizlari gozlemlemek icin bilim insanlari tarafindan kullanilir." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ikinci tahminini gir (2 hak) :  ";
   std::cout << " " << std::endl;

   std::string tahmin8;
   std::getline(std::cin, tahmin8);
   if (tahmin8 == kelime3) {
	   std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin.  " << std::endl;
	   std::cout << " " << std::endl;
   }


   std::cout << "ucuncu ipucu  :  Galileo Galilei bu aleti gelistirmis ve astronomiye buyuk katkida bulunmustur." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ucuncu tahminini gir (1 hak) :  ";
   std::cout << " " << std::endl;

   std::string tahmin9;
   std::getline(std::cin, tahmin9);
   if (tahmin9 == kelime3) {
	   std::cout << " " << std::endl;
	   std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin. Ve oyunu kaybettin!  " << std::endl;
	   std::cout << " " << std::endl;
	   return 0;
   }

   

	   std::string kelime4 = "muze";


   std::cout << "ilk ipucu  :  Sanat eserleri, tarihî nesneler ve diger onemli koleksiyonlarin sergilendigi yer." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ilk tahminini gir (3 hak) :  ";
   std::cout << " " << std::endl;
   std::string tahmin10;
   std::getline(std::cin, tahmin10);
   if (tahmin10 == kelime4) {
	   std::cout << "  !!!tebrikler dogru cevap!!!  " << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin.  " << std::endl;
	   std::cout << " " << std::endl;
   }

   std::cout << "ikinci ipucu  :  Ziyaretcilere egitim ve kulturel deneyim sunar." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ikinci tahminini gir (2 hak) :  ";
   std::cout << " " << std::endl;

   std::string tahmin11;
   std::getline(std::cin, tahmin11);
   if (tahmin11 == kelime4) {
	   std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin.  " << std::endl;
	   std::cout << " " << std::endl;
   }


   std::cout << "ucuncu ipucu  :  Louvre, Vatikan Muzeleri ve Smithsonian, dunyanın unlu muzelerindendir." << std::endl;
   std::cout << " " << std::endl;
   std::cout << "lutfen ucuncu tahminini gir (1 hak) :  ";
   std::cout << " " << std::endl;

   std::string tahmin12;
   std::getline(std::cin, tahmin12);
   if (tahmin12 == kelime4) {
	   std::cout << " " << std::endl;
	   std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
	   std::cout << " " << std::endl;
   }
   else {
	   std::cout << "  yanlis tahmin ettin. Ve oyunu kaybettin!  " << std::endl;
	   std::cout << " " << std::endl;
	   return 0;
   }

	

		std::string kelime5 = "astronot";


	std::cout << "ilk ipucu  :  Uzay arastirmalarina katilan, uzayda calisan kisi." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ilk tahminini gir (3 hak) :  ";
	std::cout << " " << std::endl;
	std::string tahmin13;
	std::getline(std::cin, tahmin13);
	if (tahmin13 == kelime5) {
		std::cout << "  !!!tebrikler dogru cevap!!!  " << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}

	std::cout << "ikinci ipucu  :  Uzay gorevlerine katilarak dunya disinda deneyim kazanirlar." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ikinci tahminini gir (2 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin14;
	std::getline(std::cin, tahmin14);
	if (tahmin14 == kelime5) {
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin.  " << std::endl;
		std::cout << " " << std::endl;
	}


	std::cout << "ucuncu ipucu  :  Neil Armstrong ve Yuri Gagarin gibi unlu isimler astronotlardir." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "lutfen ucuncu tahminini gir (1 hak) :  ";
	std::cout << " " << std::endl;

	std::string tahmin15;
	std::getline(std::cin, tahmin15);
	if (tahmin15 == kelime5) {
		std::cout << " " << std::endl;
		std::cout << "!!!tebrikler dogru cevap!!!" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "$$$oyunu kazandın$$$";
		std::cout << " " << std::endl;
	}
	else {
		std::cout << "  yanlis tahmin ettin. Ve oyunu kaybettin!  " << std::endl;
		std::cout << " " << std::endl;
		return 0;
	}

		


    



}