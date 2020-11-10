#include <Python.h>

using namespace std;

void buscarAluno()
{
    Py_Initialize ();

    FILE *PScriptFile = fopen ("buscarAluno.py", "r");

    if (PScriptFile)
    {
        PyRun_SimpleFile (PScriptFile, "buscarAluno.py");
        fclose (PScriptFile);
    }

    Py_Finalize ();
}