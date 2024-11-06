function convertirHorasEnECTS() {
    const horas = parseFloat(document.getElementById("horas").value);
    const horasPorECTS = 25;
    
    if (isNaN(horas) || horas <= 0) {
        document.getElementById("resultado").innerText = "Por favor, introduce un número válido de horas.";
        return;
    }

    let ects = horas / horasPorECTS;

    // Redondear hacia arriba a partir de .3
    if (ects % 1 >= 0.3) {
        ects = Math.ceil(ects);
    } else {
        ects = Math.floor(ects);
    }

    document.getElementById("resultado").innerText = 
        `El curso de ${horas} horas equivale a ${ects} créditos ECTS.`;
}