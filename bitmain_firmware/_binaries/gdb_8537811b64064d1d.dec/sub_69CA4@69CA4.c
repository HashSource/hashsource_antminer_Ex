int __fastcall sub_69CA4(int a1, _DWORD *a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r6
  int v8; // r9
  int *v9; // r3
  int v10; // r5

  v5 = *(_DWORD *)sub_243004(a1);
  if ( a3 != 1 )
    sub_94708("-symbol-list-lines: Usage: SOURCE_FILENAME");
  v6 = sub_21ABAC(*a2);
  v7 = v6;
  if ( !v6 )
    sub_94708("-symbol-list-lines: Unknown source file name.");
  v8 = sub_1B7278(*(_DWORD *)(*(_DWORD *)(v6 + 4) + 4));
  sub_2578D4(v5, 1);
  v9 = *(int **)(v7 + 8);
  if ( v9 && *v9 > 0 )
  {
    v10 = 0;
    do
    {
      sub_2578D4(v5, 0);
      sub_257658(v5, "pc", v8, *(_DWORD *)(*(_DWORD *)(v7 + 8) + 8 * v10 + 8));
      sub_25752C(v5, "line", *(_DWORD *)(*(_DWORD *)(v7 + 8) + 8 * v10 + 4));
      sub_257374(v5, 0);
      ++v10;
    }
    while ( **(_DWORD **)(v7 + 8) > v10 );
  }
  return sub_257374(v5, 1);
}
