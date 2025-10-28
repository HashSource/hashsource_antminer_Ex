int __fastcall sub_24A804(int result)
{
  int v1; // r4

  v1 = result;
  if ( dword_48A514 )
    result = sub_259F38("collect static trace data\n");
  *(_BYTE *)(v1 + 56) = 1;
  return result;
}
