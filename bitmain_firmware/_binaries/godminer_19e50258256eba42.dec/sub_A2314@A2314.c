int __fastcall sub_A2314(int a1, __int64 *a2)
{
  __int64 v2; // r2
  int v3; // r0
  _DWORD v7[4]; // [sp+14h] [bp-68h] BYREF
  _BYTE v8[32]; // [sp+24h] [bp-58h] BYREF
  _BYTE v9[32]; // [sp+44h] [bp-38h] BYREF
  int v10; // [sp+64h] [bp-18h]
  int v11; // [sp+68h] [bp-14h]
  char v12; // [sp+6Ch] [bp-10h]
  void *src; // [sp+70h] [bp-Ch]
  __int64 *v14; // [sp+74h] [bp-8h]

  v14 = a2 + 1;
  v2 = *a2;
  v7[0] = *(_DWORD *)a2;
  v7[1] = HIDWORD(v2);
  v3 = (*(_DWORD *)(a1 + 264) << 28) | dword_5AD388;
  v10 = 0;
  v11 = v3;
  *(_DWORD *)(a1 + 532) = 1;
  if ( *((_DWORD *)a2 + 283) )
  {
    src = (void *)*((_DWORD *)a2 + 283);
    memcpy(v8, a2 + 1, sizeof(v8));
    memcpy(v9, src, sizeof(v9));
    v12 = (unsigned int)*((double *)a2 + 133);
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 36))(a1, v7);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return 0;
}
