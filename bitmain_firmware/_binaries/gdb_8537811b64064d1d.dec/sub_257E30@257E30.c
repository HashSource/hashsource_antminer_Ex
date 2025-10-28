_DWORD *__fastcall sub_257E30(int a1, int a2, int a3, int a4)
{
  int v8; // r5
  _DWORD *result; // r0
  _DWORD *v10; // r2
  int v11; // r0
  char *v12; // r1

  v8 = ((int (__fastcall *)(int, int))loc_16ECB0)(a1, dword_48A9A8);
  if ( !v8 )
  {
    v8 = sub_257D64(a1);
    ((void (__fastcall *)(int, int, int))loc_16EBF4)(a1, dword_48A9A8, v8);
  }
  result = sub_163960(a1, 0x10u);
  if ( result )
  {
    result[2] = a4;
    v10 = *(_DWORD **)(v8 + 4);
    *result = a2;
    result[1] = a3;
    result[3] = 0;
    *v10 = result;
    *(_DWORD *)(v8 + 4) = result + 3;
  }
  else
  {
    v11 = sub_257D30();
    return (_DWORD *)sub_257EBC(v11, v12);
  }
  return result;
}
