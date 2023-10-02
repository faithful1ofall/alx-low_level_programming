#!/bin/bash

# Check if the initial search directory and destination directory are provided as arguments
if [ $# -lt 3 ]; then
  echo "Usage: $0 initial_search_directory destination_directory file1 file2 file3 ..."
  exit 1
fi

# Extract the initial search directory from the first argument
initial_search_directory="$1"

# Extract the destination directory from the second argument and handle . and .. arguments
if [ "$2" = "." ]; then
  destination_directory=$(pwd)
elif [ "$2" = ".." ]; then
  destination_directory=$(dirname "$(pwd)")
else
  destination_directory="$2"
fi

# Shift the arguments to leave only the filenames
shift 2

# Loop through the remaining arguments (filenames)
for file in "$@"; do
  # Change the file extension from ".o" to ".c"
  file_with_c_extension="${file%.o}.c"
  
  # Use the find command to locate the file with the ".c" extension within the initial search directory
  found_file=$(find "$initial_search_directory" -type f -name "$file_with_c_extension")

   
  # Check if any matching files were found
  if [ -n "$found_files" ]; then
    for found_file in $found_files; do
      # Generate a unique filename by appending a timestamp
      unique_filename="$(basename -- "$found_file")_$(date +"%Y%m%d%H%M%S").c"
      
      # Copy the file with the new extension ".c" and the unique filename to the destination directory
      cp "$found_file" "$destination_directory/$unique_filename"
      
      echo "Copied $found_file to $destination_directory/$unique_filename"
    done
  else
    echo "File $file_with_c_extension not found in $initial_search_directory."
  fi
done
