int __fastcall parameter_update_kda(int a1, char a2, int a3, char a4, int a5)
{
  double v5; // r0

  if ( *(_BYTE *)(a1 + 276) != 1 )
  {
    if ( a2 && a3 > 49 && a3 <= 700 )
    {
      LODWORD(v5) = sub_345474(*(_QWORD *)(a1 + 1048));
      *(_QWORD *)(a1 + 1048) = (unsigned __int64)(v5 / (double)a3 * *(float *)(a1 + 1020));
      *(float *)(a1 + 1020) = (float)a3;
    }
    if ( a4 && a5 > 1399 && a5 <= 1700 )
      *(_DWORD *)(a1 + 1036) = a5;
  }
  return 0;
}
