int sub_17E8EC()
{
  int result; // r0

  result = sub_23F208(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( result )
    sub_94708("Cannot execute this command while the selected thread is running.");
  return result;
}
