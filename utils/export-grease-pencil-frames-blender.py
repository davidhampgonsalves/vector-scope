import bpy
import os

# Get the current scene
scene = bpy.context.scene

# Get the frame range
start_frame = 0
end_frame = 22

# Create a directory to save the SVG files
output_dir = "/Users/david/Downloads/out"
if not os.path.exists(bpy.path.abspath(output_dir)):
    os.makedirs(bpy.path.abspath(output_dir))

# Iterate through each frame
for frame in range(start_frame, end_frame + 1):
    # Set the current frame
    scene.frame_set(frame)
    
    # Export grease pencil as SVG
    output_file = f"{output_dir}/frame_{frame:04d}.svg"    
    bpy.ops.wm.grease_pencil_export_svg(
        filepath=output_file
    )