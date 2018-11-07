#ifndef CQ_HPP
#define CQ_HPP


template <class T>
class ComparateurQuantite {

	public:
   
	bool operator() (const T & op1, const T & op2){
		
		if(op1.getQuantite() > op2.getQuantite()) return true;
		else
			if(op1.getQuantite() == op2.getQuantite()){
				if(op1.getBorneInf() < op2.getBorneInf()) return true;
				else return false;
			}
			else return false;
	}
	
};


#endif
