int __fastcall sub_E168C(int a1, int a2)
{
  int result; // r0

  result = sub_274CC4("btrace-conf", "btrace-conf.dtd", &off_388E0C, a2, a1);
  if ( result )
    sub_94708("Error parsing branch trace configuration.");
  return result;
}
