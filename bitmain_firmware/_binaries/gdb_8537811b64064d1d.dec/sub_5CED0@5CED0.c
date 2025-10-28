int __fastcall sub_5CED0(int a1, int a2, int a3)
{
  int v5; // r5
  _DWORD *i; // r9
  _DWORD *j; // r8
  _DWORD *k; // r4
  int v9; // r0
  int v10; // r0

  v5 = *(_DWORD *)sub_243004(a1);
  if ( !sub_6036C("-file-list-exec-source-files", a3, a2) )
    sub_94708("-file-list-exec-source-files: Usage: No args");
  sub_2578D4(v5, 1);
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    for ( j = (_DWORD *)i[5]; j; j = (_DWORD *)*j )
    {
      for ( k = (_DWORD *)j[3]; k; k = (_DWORD *)*k )
      {
        sub_2578D4(v5, 0);
        v9 = ((int (__fastcall *)(_DWORD *))loc_2043FC)(k);
        sub_257610(v5, "file", v9);
        v10 = sub_204330(k);
        sub_257610(v5, "fullname", v10);
        sub_257374(v5, 0);
      }
    }
  }
  sub_2153B8(sub_5CD94, 0, 1);
  return sub_257374(v5, 1);
}
