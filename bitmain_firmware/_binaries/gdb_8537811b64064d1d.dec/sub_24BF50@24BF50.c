int __fastcall sub_24BF50(char *s, int a2)
{
  char *v4; // r6
  int v5; // r6
  int v6; // r4
  int v7; // r6
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v10[20]; // [sp+10h] [bp-14h] BYREF

  if ( dword_48A8D0 && !dword_48A8C8 )
    sub_94708("May not look at trace frames while trace is running.");
  if ( !s || !*s )
    return sub_259F38("Usage: tfind outside <startaddr>,<endaddr>\n");
  v4 = strchr(s, 44);
  if ( v4 )
  {
    ptr = v10;
    sub_248B4C(&ptr, s, (int)v4);
    v5 = sub_93634(v4 + 1);
    v6 = sub_14CBC4((int)ptr);
    v7 = sub_14CBC4(v5);
    if ( ptr != v10 )
      sub_339E8C(ptr);
  }
  else
  {
    v6 = sub_14CBC4((int)s);
    v7 = v6 + 1;
  }
  return sub_24B6A0(4, 0, v6, v7, a2);
}
