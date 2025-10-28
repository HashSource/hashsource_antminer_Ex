int __fastcall BM_CRC16_WITH_KEY(char *a1, int a2, __int16 a3)
{
  char *v3; // r3

  while ( a2-- )
  {
    v3 = a1++;
    a3 = sub_2C6E60(a3, *v3);
  }
  return (unsigned __int16)a3;
}
