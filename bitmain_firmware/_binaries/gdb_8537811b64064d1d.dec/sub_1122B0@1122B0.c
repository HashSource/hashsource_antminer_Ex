int __fastcall sub_1122B0(int a1, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 1:
      result = *(_DWORD *)(sub_1780DC(a1) + 104);
      break;
    case 2:
      result = *(_DWORD *)(sub_1780DC(a1) + 112);
      break;
    case 4:
      result = *(_DWORD *)(sub_1780DC(a1) + 120);
      break;
    case 8:
      result = *(_DWORD *)(sub_1780DC(a1) + 128);
      break;
    default:
      sub_94708("no unsigned variant found for type, while evaluating DWARF expression");
  }
  return result;
}
