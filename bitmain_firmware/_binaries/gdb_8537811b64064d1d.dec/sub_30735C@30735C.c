bool __fastcall sub_30735C(int a1)
{
  _DWORD *v1; // r3

  v1 = *(_DWORD **)(a1 + 28);
  return !v1 || a1 != *v1 || (unsigned int)(v1[1] - 16180) > 0x1F;
}
