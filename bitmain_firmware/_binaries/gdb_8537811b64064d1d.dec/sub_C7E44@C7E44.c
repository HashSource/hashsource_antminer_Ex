int __fastcall sub_C7E44(int a1)
{
  int result; // r0

  switch ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) )
  {
    case 0x14:
      sub_C7B9C(0);
      result = 2;
      break;
    case 0x15:
      sub_259F38("Thread Event Breakpoint: gdb should not stop!\n");
      result = 2;
      break;
    case 0x16:
      sub_259F38("Overlay Event Breakpoint: gdb should not stop!\n");
      result = 2;
      break;
    case 0x17:
      sub_259F38("Longjmp Master Breakpoint: gdb should not stop!\n");
      result = 2;
      break;
    case 0x18:
      sub_259F38("std::terminate Master Breakpoint: gdb should not stop!\n");
      result = 2;
      break;
    case 0x19:
      sub_259F38("Exception Master Breakpoint: gdb should not stop!\n");
      goto LABEL_3;
    default:
LABEL_3:
      result = 2;
      break;
  }
  return result;
}
