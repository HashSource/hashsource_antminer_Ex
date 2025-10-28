int __fastcall sub_24A6C4(int result, unsigned int a2)
{
  int v2; // r5

  v2 = result;
  if ( dword_48A514 )
    result = sub_259F38("collect register %d\n", a2);
  if ( a2 > 0xFF )
    sub_94708("Internal: register number %d too large for tracepoint", a2);
  *(_BYTE *)(v2 + (a2 >> 3)) |= 1 << (a2 & 7);
  return result;
}
