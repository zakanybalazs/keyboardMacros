# A script for googling whats highlighted
import subprocess
import time

contents = clipboard.get_selection()
window.activate('Google Chrome', switchDesktop=True)

keyboard.send_keys("<ctrl>+t")
time.sleep(0.25)
keyboard.send_keys(contents)
keyboard.send_keys("<enter>")
