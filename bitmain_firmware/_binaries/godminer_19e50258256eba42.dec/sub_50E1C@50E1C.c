int __fastcall sub_50E1C(int *a1)
{
  unsigned __int8 buf; // [sp+Fh] [bp-5h] BYREF

  if ( read(*a1, &buf, 1u) == 1 )
    return buf;
  else
    return -1;
}
