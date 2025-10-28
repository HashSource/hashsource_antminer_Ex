int __fastcall sub_18675C(int a1, int a2, int a3, const char *a4)
{
  if ( sub_23102C() )
    return sub_25A440(a1, "Disabling randomization of debuggee's virtual address space is %s.\n", a4);
  else
    return sub_25A6E4(
             "Disabling randomization of debuggee's virtual address space is unsupported on\nthis platform.\n",
             a1);
}
