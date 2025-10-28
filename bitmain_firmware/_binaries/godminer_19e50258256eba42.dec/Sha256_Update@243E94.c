int __fastcall Sha256_Update(int result, _BYTE *a2, int a3)
{
  _BYTE *v3; // r2
  int v4; // r3
  int v7; // [sp+Ch] [bp-18h]
  int v8; // [sp+14h] [bp-10h]

  v7 = result;
  v8 = *(_QWORD *)(result + 32) & 0x3F;
  while ( a3 )
  {
    v3 = a2++;
    v4 = v8++;
    *(_BYTE *)(v7 + v4 + 40) = *v3;
    ++*(_QWORD *)(v7 + 32);
    --a3;
    if ( v8 == 64 )
    {
      v8 = 0;
      result = sub_243DB8(v7);
    }
  }
  return result;
}
