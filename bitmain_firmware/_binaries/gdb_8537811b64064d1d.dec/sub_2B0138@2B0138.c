int __fastcall sub_2B0138(int a1, _DWORD *a2)
{
  unsigned __int8 v4; // [sp+7h] [bp-1h] BYREF

  if ( sub_2A8800((int)&v4, 1u, a1) == 1 )
    return v4;
  if ( sub_2A6938() == 18 )
    return -1;
  *a2 = 1;
  return -1;
}
