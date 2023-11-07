#include <Python.h>

/**
 * print_python_list_info - Print basics information abouts Python list.
 * @p: PyObject lists.
 */
void print_python_list_info(PyObject *p)
{
	int s, a, m;
	PyObject *obj;

	s = Py_SIZE(p);
	a = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", s);
	printf("[*] Allocated = %d\n", a);

	for (m = 0; m < s; m++)
	{
		printf("Element %d: ", m);

		obj = PyList_GetItem(p, m);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
