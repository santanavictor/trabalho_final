#include <Python.h>

using namespace std;

void exibirMatriculas()
{
    Py_Initialize ();

    FILE *PScriptFile = fopen ("exibirMatriculas.py", "r");

    if (PScriptFile)
    {
        PyRun_SimpleFile (PScriptFile, "exibirMatriculas.py");
        fclose (PScriptFile);
    }

    Py_Finalize ();
}