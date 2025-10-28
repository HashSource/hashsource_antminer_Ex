int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r12
  unsigned __int64 v9; // r2

  if ( *(_BYTE *)(a1 + 276) != 1 )
  {
    if ( a2 && a3 >= 900 && a3 <= 1900 )
    {
      v5 = sub_34579C(*(_QWORD *)(a1 + 1048), a3);
      v6 = (int)*(float *)(a1 + 1020);
      v8 = v6 * v7 + v5 * (v6 >> 31);
      v9 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v6;
      HIDWORD(v9) += v8;
      *(_QWORD *)(a1 + 1048) = v9;
      *(float *)(a1 + 1020) = (float)a3;
    }
    if ( a4 && a5 > 1399 && a5 <= 1550 )
      *(_DWORD *)(a1 + 1036) = a5;
  }
  return 0;
}
