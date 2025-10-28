int __fastcall sub_197E9C(int a1, char a2)
{
  int v5; // [sp+1Ch] [bp-30h] BYREF
  _DWORD v6[3]; // [sp+20h] [bp-2Ch] BYREF
  _WORD s[8]; // [sp+2Ch] [bp-20h] BYREF
  int v8; // [sp+3Ch] [bp-10h]

  memset(s, 0, sizeof(s));
  v8 = 0;
  v5 = 0;
  LOBYTE(s[4]) = 0;
  HIBYTE(s[4]) = *(_DWORD *)(a1 + 468) * a2;
  s[5] = 0;
  return (*(int (__fastcall **)(int, _WORD *, int, _DWORD *, int *))(a1 + 316))(a1, s, 1, v6, &v5);
}
