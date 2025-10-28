void __fastcall sub_1C75B8(const char *a1, int a2)
{
  int v3; // r4
  char *v4; // [sp+4h] [bp-18h] BYREF
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 v6[12]; // [sp+10h] [bp-Ch] BYREF

  v4 = (char *)a1;
  sub_1C7488((const char **)&v4, "print", (int)v6);
  if ( v4 && *v4 )
  {
    sub_1C42D0((char **)&ptr, v4);
    v3 = sub_14CD64((int *)ptr);
    if ( ptr )
      free(ptr);
  }
  else
  {
    v3 = sub_26C860(0, v4);
  }
  if ( a2 || v3 && (unsigned int)sub_26BC98(v3) && **(_BYTE **)(sub_26BC98(v3) + 24) != 10 )
    sub_1C7530(v3, v6);
}
