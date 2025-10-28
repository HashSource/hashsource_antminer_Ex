int __fastcall sub_2572BC(void **a1, __int64 a2)
{
  __int64 src; // [sp+0h] [bp-14h] BYREF
  void **v5; // [sp+Ch] [bp-8h]

  v5 = a1;
  src = a2;
  if ( a1 && *v5 )
  {
    memcpy(*v5, &src, 8u);
    *v5 = (char *)*v5 + 8;
  }
  return 8;
}
