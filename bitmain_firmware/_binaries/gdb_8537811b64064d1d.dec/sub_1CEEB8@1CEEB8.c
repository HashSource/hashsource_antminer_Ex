int __fastcall sub_1CEEB8(int result)
{
  int v1; // r4
  int *i; // r4
  int v3; // r0
  _DWORD *v4; // r0

  if ( *(_DWORD *)(result + 24) )
  {
    v1 = result;
    sub_259F38("Psymtabs:\n");
    for ( i = *(int **)(v1 + 24); i; i = (int *)*i )
    {
      v3 = sub_259F38("%s at ", (const char *)i[1]);
      v4 = (_DWORD *)sub_242FB4(v3);
      sub_25A474(i, *v4);
      sub_259F38(", ");
      sub_259B80("  ");
    }
    return sub_259F38("\n\n");
  }
  return result;
}
