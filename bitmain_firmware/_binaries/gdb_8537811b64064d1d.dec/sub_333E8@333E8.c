int __fastcall sub_333E8(int a1, int a2)
{
  int v3; // r1
  int v4; // r3
  int v5; // r0

  if ( !a1 )
    sub_94708("add-symbol-file-from-memory requires an expression argument");
  v3 = sub_14CBC4();
  v4 = *(_DWORD *)(dword_487D2C + 32);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 36);
  else
    v5 = *(_DWORD *)(dword_487D2C + 8);
  if ( !v5 )
    sub_94708("Must use symbol-file or exec-file before add-symbol-file-from-memory.", v3);
  return sub_33150(v5, v3, 0, 0, a2);
}
