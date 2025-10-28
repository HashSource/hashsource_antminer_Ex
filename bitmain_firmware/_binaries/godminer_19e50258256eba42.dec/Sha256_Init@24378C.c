int __fastcall Sha256_Init(int result)
{
  *(_DWORD *)result = 1779033703;
  *(_DWORD *)(result + 4) = -1150833019;
  *(_DWORD *)(result + 8) = 1013904242;
  *(_DWORD *)(result + 12) = -1521486534;
  *(_DWORD *)(result + 16) = 1359893119;
  *(_DWORD *)(result + 20) = -1694144372;
  *(_DWORD *)(result + 24) = 528734635;
  *(_DWORD *)(result + 28) = 1541459225;
  *(_QWORD *)(result + 32) = 0;
  return result;
}
