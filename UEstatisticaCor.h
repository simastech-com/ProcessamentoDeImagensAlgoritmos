//---------------------------------------------------------------------------

#ifndef UEstatisticaCorH
#define UEstatisticaCorH
//---------------------------------------------------------------------------
class UEstatisticaCor
{
	private:
		int cor;
		int qtd;
	public:
		UEstatisticaCor();
		void setCor(int cor);
		int  getCor();
		void setQtd(int qtd);
		int  getQtd();
		void resetar();
		void incrementar();
};
#endif
