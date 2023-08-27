# Mbed Devcontainer Template

Powered by Cookiecutter, the Mbed Devcontainer Template provides a framework for initializing Mbed projects with Devcontainer support seamlessly integrated.

## Usage

### Creating a New Project

1. **Install Cookiecutter**: If you haven't already installed Cookiecutter, you can install it using pip as follows:
    ```bash
    pip install cookiecutter
    ```
2. **Run Cookiecutter with the Template**: To create a new Mbed project, execute the following command:
    ```bash
    cookiecutter gh:KUCHITAKE/mbed-devcontainer-template
    ```

### Opening the Project in a Devcontainer

1. Open the generated project folder in Visual Studio Code.
2. Press <kbd>F1</kbd> to open the command palette and select `Remote-Containers: Reopen in Container`. This will set up the Devcontainer environment for you.

### Building the Project

You have two options to build your project:

1. **Using VSCode Tasks**: If tasks are configured, you can run the build task in VSCode directly.
2. **Using Terminal Command**: Alternatively, you can use `mbed-tools` to compile the project from the terminal:
    ```bash
    mbed-tools compile
    ```