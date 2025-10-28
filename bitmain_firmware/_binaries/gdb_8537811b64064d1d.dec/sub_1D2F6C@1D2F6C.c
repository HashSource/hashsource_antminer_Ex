__int64 __fastcall sub_1D2F6C(_DWORD *a1)
{
  int v2; // r5
  const char *v3; // r0
  __int64 result; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = *a1;
  v3 = (const char *)sub_93634(*a1);
  if ( (unsigned int)*(unsigned __int8 *)v3 - 48 > 9 )
    sub_94708("Expected positive number, got: %s.", v3);
  result = sub_93384((int)v3, &v5, 10);
  *a1 += v5 - v2;
  return result;
}
