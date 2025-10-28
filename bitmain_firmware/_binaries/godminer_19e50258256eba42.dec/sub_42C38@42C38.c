_DWORD *__fastcall sub_42C38(_DWORD *a1, char a2)
{
  _DWORD *result; // r0
  int v5; // [sp+Ch] [bp-10h] BYREF
  _DWORD *v6; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v5 = 0;
  result = get_all_created_runtime(&v5);
  v6 = result;
  for ( i = 0; i < v5; ++i )
    *(_BYTE *)(v6[i] + *a1 + 576) = a2;
  return result;
}
