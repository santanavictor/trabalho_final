#include <Python.h>

using namespace std;

void filtrarMatriculas()
{
    Py_Initialize ();

    FILE *PScriptFile = fopen ("filtrarMatriculas.py", "r");

    if (PScriptFile)
    {
        PyRun_SimpleFile (PScriptFile, "filtrarMatriculas.py");
        fclose (PScriptFile);
    }

    Py_Finalize ();
}