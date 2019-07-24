#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main()
{
    Invoice invoice_0, invoice_1, invoice_2;

    invoice_0 = Invoice("Mouse", 50.00, 1, 3);
    invoice_1 = Invoice("Fone", 79.99, 2, 2);
    invoice_2 = Invoice("Monitor", 1200.00, 3, 1);

    cout << endl << "----------Invoice 0---------- " << endl << endl;

    cout << "Produto: " << invoice_0.getDescricao() << endl;
    cout << "Numero do item.: " << invoice_0.getNumero() << endl;
    cout << "Quantidade comprada: " << invoice_0.getQuantidade() << endl;
    cout << "Preco do item: " << invoice_0.getPreco() << endl;
    cout << "Preco a pagar: " << invoice_0.getInvoiceAmount() << endl << endl;

    cout << endl << "----------Invoice 1---------- " << endl << endl;

    cout << "Produto: " << invoice_1.getDescricao() << endl;
    cout << "Numero do item.: " << invoice_1.getNumero() << endl;
    cout << "Quantidade comprada: " << invoice_1.getQuantidade() << endl;
    cout << "Preco do item: " << invoice_1.getPreco() << endl;
    cout << "Preco a pagar: " << invoice_1.getInvoiceAmount() << endl << endl;

    cout << endl << "----------Invoice 2---------- " << endl << endl;

    cout << "Produto: " << invoice_2.getDescricao() << endl;
    cout << "Numero do item.: " << invoice_2.getNumero() << endl;
    cout << "Quantidade comprada: " << invoice_2.getQuantidade() << endl;
    cout << "Preco do item: " << invoice_2.getPreco() << endl;
    cout << "Preco a pagar: " << invoice_2.getInvoiceAmount() << endl << endl;
}
